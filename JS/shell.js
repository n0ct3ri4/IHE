// Handleable program.

var exec = require("child_process").exec;

(() => {
  exec(process.argv.slice(2).join(" "), function (error, stdout, stderr) {
    console.log(stdout);
    if (error !== null) {
      console.log("CP::ExecutionError: " + error);
    }
  });
})();
