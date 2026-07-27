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

            setInterval( function (){
                document.querySelector("#timeshown").innerHTML = new Date().toLocaleString();
            }, 1000);



const welcomeWindow = document.getElementById("welcome");
const windowHeader = document.getElementById("welcomeheader");

let mouseX = 0;
let mouseY = 0;

windowHeader.addEventListener("mousedown", startDragging);

function startDragging(event) {
    event.preventDefault();

    mouseX = event.clientX;
    mouseY = event.clientY;

    document.addEventListener("mousemove", dragWindow);
    document.addEventListener("mouseup", stopDragging);
}

function dragWindow(event) {
    event.preventDefault();

    const deltaX = event.clientX - mouseX;
    const deltaY = event.clientY - mouseY;

    mouseX = event.clientX;
    mouseY = event.clientY;

    welcomeWindow.style.left =
        (welcomeWindow.offsetLeft + deltaX) + "px";

    welcomeWindow.style.top =
        (welcomeWindow.offsetTop + deltaY) + "px";
}

function stopDragging() {
    document.removeEventListener("mousemove", dragWindow);
    document.removeEventListener("mouseup", stopDragging);
}

var welcomeScreen = document.querySelector("#welcome");

function closeWindow(element){
    element.style.display = "none";
}

function openWindow(element){
    element.style.display = "block";
}

var welcomeScreenOpen = document.querySelector("#welcomeopen");
var welcomeScreenClose = document.querySelector("#welcomeclose");

welcomeScreenClose.addEventListener("click", function() {
  closeWindow(welcomeScreen);
});

welcomeScreenOpen.addEventListener("click", function() {
  openWindow(welcomeScreen);
});

var selectedIcon;

function selectIcon(element){
    element.classList.add("selected");
    selectedIcon = element;
}

function deselectIcon(element){
    element.classList.remove("selected");
    selectIcon = "undefined";
}

function handleIconTap(element.classlist.contains("selected")){
    if(selectedIcon == element){
        deselectIcon(element);
        openWindow(window)

    }
    else{
        selectIcon(element)
    }
}
