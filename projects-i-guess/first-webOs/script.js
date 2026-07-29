
// =========================
// Frieren Clock
// =========================

const himmeldeath = 80;

let startTime = Number(localStorage.getItem("frierenStart"));

if (!startTime) {
    startTime = Date.now();
    localStorage.setItem("frierenStart", startTime);
}


function displayFrierenTime() {
    console.log("updating...");

    const currentTime = Date.now();
    const elapsed = currentTime - startTime;

    const totalDays = Math.floor(elapsed / 86400000);

    const months = Math.floor(totalDays / 30);
    const days = totalDays % 30;

    document.getElementById("BJEtime").textContent =
        `Frieren time: ${himmeldeath} yrs, ${months} months, ${days} days`;
}


displayFrierenTime();
setInterval(displayFrierenTime, 86400000);


setInterval(function () {
    document.querySelector("#timeshown").innerHTML =
        new Date().toLocaleString();
}, 1000);


// Make the DIV element draggable:
dragElement(document.getElementById("welcome"));
dragElement(document.getElementById("notes"));
dragElement(document.getElementById("grimoire"));
dragElement(document.getElementById("videos"));

// Step 1: Define a function called `dragElement` that makes an HTML element draggable.
function dragElement(element) {
  // Step 2: Set up variables to keep track of the element's position.
  var initialX = 0;
  var initialY = 0;
  var currentX = 0;
  var currentY = 0;

  // Step 3: Check if there is a special header element associated with the draggable element.
  if (document.getElementById(element.id + "header")) {
    // Step 4: If present, assign the `dragMouseDown` function to the header's `onmousedown` event.
    // This allows you to drag the window around by its header.
    document.getElementById(element.id + "header").onmousedown = startDragging;
  } else {
    // Step 5: If not present, assign the function directly to the draggable element's `onmousedown` event.
    // This allows you to drag the window by holding down anywhere on the window.
    element.onmousedown = startDragging;
  }

  // Step 6: Define the `startDragging` function to capture the initial mouse position and set up event listeners.
  function startDragging(e) {
    e = e || window.event;
    e.preventDefault();
    // Step 7: Get the mouse cursor position at startup.
    initialX = e.clientX;
    initialY = e.clientY;
    // Step 8: Set up event listeners for mouse movement (`elementDrag`) and mouse button release (`closeDragElement`).
    document.onmouseup = stopDragging;
    document.onmousemove = dragElement;
  }

  // Step 9: Define the `elementDrag` function to calculate the new position of the element based on mouse movement.
  function dragElement(e) {
    e = e || window.event;
    e.preventDefault();
    // Step 10: Calculate the new cursor position.
    currentX = initialX - e.clientX;
    currentY = initialY - e.clientY;
    initialX = e.clientX;
    initialY = e.clientY;
    // Step 11: Update the element's new position by modifying its `top` and `left` CSS properties.
    element.style.top = (element.offsetTop - currentY) + "px";
    element.style.left = (element.offsetLeft - currentX) + "px";
  }

  // Step 12: Define the `stopDragging` function to stop tracking mouse movement by removing the event listeners.
  function stopDragging() {
    document.onmouseup = null;
    document.onmousemove = null;
  }
}

let biggestIndex = 1;
let topBar = document.getElementById("top");

const welcomeScreen = document.getElementById("welcome");
const welcomeScreenClose = document.getElementById("welcomeclose");
const welcomeScreenOpen = document.getElementById("welcomeopen");

const noteScreen = document.getElementById("notes");
const noteScreenOpen = document.getElementById("notesopen");
const noteScreenClose = document.getElementById("notesclose");

const grimoireScreen = document.getElementById("grimoire");
const grimoireScreenOpen = document.getElementById("grimoireopen");
const grimoireScreenClose = document.getElementById("grimoireclose");

const videoScreen = document.getElementById("videos");
const videoScreenOpen = document.getElementById("videoopen");
const videoScreenClose = document.getElementById("videoclose");

function closeWindow(element){
    element.style.display = "none";
}

function openWindow(element){
    element.style.display = "flex";
    biggestIndex++;
    element.style.zIndex = biggestIndex;
    topBar.style.zIndex = biggestIndex + 1;

}

welcomeScreenOpen.addEventListener("click", function(){
    openWindow(welcomeScreen);
})

welcomeScreenClose.addEventListener("click", function(){
    closeWindow(welcomeScreen);
})

noteScreenOpen.addEventListener("click", function(){
    openWindow(noteScreen);
})

noteScreenClose.addEventListener("click", function(){
    closeWindow(noteScreen);
})

grimoireScreenOpen.addEventListener("click", function(){
    openWindow(grimoireScreen);
})

grimoireScreenClose.addEventListener("click", function(){
    closeWindow(grimoireScreen);
})

videoScreenOpen.addEventListener("click", function(){
    openWindow(videoScreen);
})

videoScreenClose.addEventListener("click", function(){
    closeWindow(videoScreen);
})

let selectedIcon = null;

function selectIcon(element){
    element.classList.add("selected");
    selectedIcon = element;
}

function deselectIcon(element){
    element.classList.remove("selected");
    selectedIcon = undefined;
}

function handleIconTap(element){
    if(element.classList.contains("selected")){
        element.classList.remove("selected")
    }
    else{
        selectIcon(element);
    }
}

function addWindowTapHandling(element) {
  element.addEventListener("mousedown", () =>
    handleWindowTap(element)
  )
}

function handleWindowTap(element){
    biggestIndex++;
    element.style.zIndex = biggestIndex;
    topBar.style.zIndex = biggestIndex + 1;
    deselectIcon(selectedIcon);
}

addWindowTapHandling(welcomeScreen);
addWindowTapHandling(noteScreen);
addWindowTapHandling(grimoireScreen);
addWindowTapHandling(videoScreen);

let content = [
  {
    title: "Welcome",
    date: "06/28/2023",
    content: `
           <p contenteditable="True">
          <span contenteditable="true">Welcome to <strong>Frieren's memos</strong>

            <p>This is where Frieren-the-mage would keep her memos and notes and grocery lists</p>
           
          </span>
        <blockquote
          style="background-color: #F9F9F9; margin-top: 16x; margin-bottom: 16px; margin-left: 0px; margin-right: 0px; padding: 16px; border-radius: 16px; color: black;"
          contenteditable="true">
        </blockquote>
        <span contenteditable="true">
          I was hoping i could solve a math problem actually but it seems i really just suck at that
        </span>
        </p>

        
      `
  },

 /* {
    title:
  }*/
]


function setNotesContent(index){
    const notesContent = document.getElementById("notesContent")
    notesContent.innerHTML = content[index].content
}

setNotesContent(0);

function addToSideBar(index){
    let sideBar = document.getElementById("sideBar");
    let note = content[index];
    let newDiv = document.createElement("div");

      newDiv.innerHTML = `
    <p style="margin: 0px;">
      ${note.title}
    </p>
    <p style="font-size: 12px; margin: 0px;">
      ${note.date}
    </p>
  `;

  newDiv.addEventListener("click", function() {
    setNotesContent(index);
  });

    sideBar.appendChild(newDiv);
}


    for (let i = 0; i < content.length; i++) {
  addToSideBar(i)
}

