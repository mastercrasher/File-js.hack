<main> <div class="title"> <span class="red">4</span><span class="black">BI</span> <span class="do-not"> <span class="hole one"></span> <hr> <span class="hole two"></span> </span> <span class="red">0</span><span class="black">N!</span> </div> <span class="black">You don’t have permission to access <code>/file_AC.srv/</code> on this webpage.</p> </main>
<style>
  $bgColor: #333;
$red: #f22;
$logoShadow: 0.25rem 0.25rem 0.5rem #222;
$doNotW: 6.25rem;
$doNotH: $doNotW / 2;

:root {
  font-size: calc(8px + (24  - 8) * (100vw - 320px)/(1920 - 320));
}
body {
  background: $bgColor;
  display: flex;
  font: 1em "Droid Sans", sans-serif;
  height: 100vh;
  line-height: 1.5;
  margin: 0;
}
main {
  margin: auto;
  max-width: 36em;
  padding: 1.5em;
}
code {
  background: rgba(0,0,0,0.2);
  padding: 0.25em;
}
.title {
  margin: 1.5em auto 0 auto;
  text-align: center;
}
.title span {
  font-size: 8em;
  display: inline-block;
  font-weight: 900;
  vertical-align: middle;
  text-shadow: $logoShadow;
}
.red {
  color: $red;
}
.white {
  color: #ffffff;
}
.do-not {
  background: $red;
  border-radius: 50% 50%;
  box-shadow: 0.25rem -0.25rem 0.5rem #222;
  position: relative;
  width: $doNotW * 1.1;
  height: $doNotW * 1.1;
  transform: rotate(90deg);
}
.hole {
  background: $bgColor;
  position: absolute;
  width: $doNotW * 0.8;
  height: $doNotH * 0.75;
  box-shadow: $logoShadow inset;
  left: 13%;
}
.one {
  border-radius: $doNotW $doNotW 0 0;
  border-bottom: 0;
  top: 10%;
}
hr {
  border: 1px solid #911;
  position: absolute;
  top: -9%;
  width: 98%;
}
.two {
  border-radius: 0 0 $doNotW $doNotW;
  border-top: 0;
  bottom: 10%;
}
p {
  font-size: 1.75em;
  color: #ffffff;
  text-align: center;
}
  body {
  background-color: ;
}
</style>
