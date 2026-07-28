let biggestIndex = 1;
let topBar = document.getElementById("top")


class Windows{

  constructor(windowElement, headerElement, closeButton, minimizeButton, maximizeButton){

    this.windowElement = windowElement;
    this.headerElement = headerElement;
    this.closeButton = closeButton;
    this.minimizeButton = minimizeButton;
    this.maximizeButton = maximizeButton;

    this.maximizeButton.addEventListener("click", ()=>{
        this.maximizeWindow();
    })

    this.minimizeButton.addEventListener("click", ()=>{
        this.minimizeWindow();
    })

    this.closeButton.addEventListener("click", ()=>{
        this.closeWindow();
    })

    this.dragElement();

  }

  openWindow(){
    this.windowElement.style.display = "flex";
    biggestIndex++;
    this.windowElement.style.zIndex = biggestIndex;
    topBar.style.zIndex = biggestIndex + 1;

  }

  closeWindow(){
    this.windowElement.style.display = "none";
  }

  minimizeWindow(){
    this.windowElement.style.display = "none";
  }

  maximizeWindow(){
    this.windowElement,style.display = ""
  }

  dragElement() {

    const self = this;

    let initialX = 0;
    let initialY = 0;
    let currentX = 0;
    let currentY = 0;

    self.headerElement.onmousedown = startDragging;

    function startDragging(e) {
        e.preventDefault();

        initialX = e.clientX;
        initialY = e.clientY;

        document.onmousemove = elementDrag;
        document.onmouseup = stopDragging;
    }

    function elementDrag(e) {
        e.preventDefault();

        currentX = initialX - e.clientX;
        currentY = initialY - e.clientY;

        initialX = e.clientX;
        initialY = e.clientY;

        self.windowElement.style.top =
            (self.windowElement.offsetTop - currentY) + "px";

        self.windowElement.style.left =
            (self.windowElement.offsetLeft - currentX) + "px";
    }

    function stopDragging() {
        document.onmousemove = null;
        document.onmouseup = null;
    }
}

}

const welcome = document.getElementById("welcome");
const welcomeheader = document.getElementById("welcomeheader");
const welcomeclose = document.getElementById("welcomeclose");

const adventure = document.getElementById("adventure");
const adventureheader = document.getElementById("adventureheader");
const adventureclose = document.getElementById("adventureclose");

let welcomeWindow = new Windows(welcome, welcomeheader, welcomeclose);
let adventureWindow = new Windows(adventure, adventureheader, adventureclose)


 /* 
  // Step 1: Define a function called `dragElement` that makes an HTML element draggable.
  dragElement() {
  // Step 2: Set up variables to keep track of the element's position.
  var initialX = 0;
  var initialY = 0;
  var currentX = 0;
  var currentY = 0;

  // Step 3: Check if there is a special header element associated with the draggable element.
  if (document.getElementById(element.id + "header")) {
    // Step 4: If present, assign the `dragMouseDown` function to the header's `onmousedown` event.
    // This allows you to drag the window around by its header.
    this.headerElement.onmousedown = startDragging;
  } else {
    // Step 5: If not present, assign the function directly to the draggable element's `onmousedown` event.
    // This allows you to drag the window by holding down anywhere on the window.
    this.windowElement.onmousedown = startDragging;
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
}

*/