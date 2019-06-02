(
 ( nil .  (
           (progn
             (make-local-variable 'process-environment)
             (setq process-environment (copy-sequence process-environment))
             (setenv "ARDUINO_SDK_PATH" "~/development/arduino/arduinoSDK"))

           (projectile-project-compilation-dir . "build")
           (projectile-project-compilation-cmd . "cmake .. && make DigitalInputs_flash")
           )))
