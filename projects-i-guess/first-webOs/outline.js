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

    document.getElementById("timeshown").textContent =
        new Date().toLocaleString();

}, 1000);





// =========================
// Window Class
// =========================


class Window {

    constructor(windowElement, headerElement, closeButton) {

        this.windowElement = windowElement;
        this.headerElement = headerElement;
        this.closeButton = closeButton;


        this.open();
        this.addCloseButton();
        this.makeDraggable();

    }


    open() {

        this.windowElement.style.display = "block";

    }


    close() {

        this.windowElement.style.display = "none";

    }



    addCloseButton() {

        this.closeButton.addEventListener("click", () => {

            this.close();

        });

    }



    makeDraggable() {

        let mouseX;
        let mouseY;


        this.headerElement.addEventListener("mousedown", (event) => {

            mouseX = event.clientX;
            mouseY = event.clientY;


            document.addEventListener("mousemove", drag);
            document.addEventListener("mouseup", stop);

        });



        const drag = (event) => {

            const deltaX = event.clientX - mouseX;
            const deltaY = event.clientY - mouseY;


            mouseX = event.clientX;
            mouseY = event.clientY;


            this.windowElement.style.left =
                this.windowElement.offsetLeft + deltaX + "px";


            this.windowElement.style.top =
                this.windowElement.offsetTop + deltaY + "px";

        };



        const stop = () => {

            document.removeEventListener("mousemove", drag);
            document.removeEventListener("mouseup", stop);

        };

    }

}






// =========================
// Create Windows
// =========================


const welcomeWindow = new Window(
    document.getElementById("welcome"),
    document.getElementById("welcomeheader"),
    document.getElementById("welcomeclose")
);



const notesWindow = new Window(
    document.getElementById("notes"),
    document.getElementById("notesheader"),
    document.getElementById("notesclose")
);



const settingsWindow = new Window(
    document.getElementById("settings"),
    document.getElementById("settingsheader"),
    document.getElementById("settingsclose")
);

const calculatorWindows = new Window(
    document.getElementById("calculator"),
    document.getElementById("calculatorheader"),
    document.getElementById("calculatorclose")
);




// =========================
// Open Buttons
// =========================


document.getElementById("welcomeopen")
.addEventListener("click", () => {

    welcomeWindow.open();

});



document.getElementById("notesopen")
.addEventListener("click", () => {

    notesWindow.open();

});



document.getElementById("settingsopen")
.addEventListener("click", () => {

    settingsWindow.open();

});
