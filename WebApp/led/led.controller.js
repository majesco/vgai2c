angular.module('app')
    .controller('LedController', [ 'LedService','FlashService', function (LedService, FlashService) {
        var vm = this;

        vm.sendMessage = sendMessage;   // Funciones que se pueden ver desde vm (ViewMode)
        vm.smiley = smiley;             //Estas funciones, excepto la primera son para los botones
        vm.flat = flat;                 // de emojis que se encuentran en la parte inferior de la pagina
        vm.cute = cute;
        vm.annoyed = annoyed;
        vm.heart = heart;
        vm.love = love
        vm.winkle = winkle;
        vm.meh =meh;
        vm.flat2 = flat2;
        vm.surprised = surprised;

        function sendMessage(){

            var len = vm.input.length;  //el mensaje no debe ser superior a 20 caracteres.
            if (len>20){
                FlashService.Error("Mensaje no debe ser mayor a 20 caracteres");
                return;
            }

            var message = vm.input;

            //Este bucle intenta reemplazar cada aparicion de emoji por un caracter que el equipo 
            //establecio para reemplazo. Esto se hace por el problema de unicode de dos caracteres
            //por emoji
            for (var i = 0, len = message.length; i < len; i++) {

                message = message.replace("😁", "!");
                message = message.replace("😐", "@");
                message = message.replace("😊", "#");
                message = message.replace("😒", "$");
                message = message.replace("❤️", "%");
                message = message.replace("😍", "^");
                message = message.replace("😉", "&");
                message = message.replace("😕", "*");
                message = message.replace("😑", "(");
                message = message.replace("😮", ")");

            }
            var send = {mensaje: message};  //Se prepara el json para enviar.
            console.log(send);

            LedService.SendMessage(send)
                .then(function(response){

                if (response.data == 1 ){                       // 1 significa que funciono
                    FlashService.Success("Se ha enviado el mensaje");
                    vm.input =" "    
                }
                else{                                   // 0 significa que hubo un problema
                    FlashService.Error("No se ha podido enviar el mensaje");       
                }

            },
                      function(respose){
                FlashService.Error("No se ha podido enviar el mensaje");    //Si hay un problema con el envio

            });
        }
        // Funcion si presiona el boton del emoji cara feliz    
        function smiley(){
            vm.input = vm.input.concat("😁");
        }
        // Funcion si presiona el boton del emoji cara flat            
        function flat(){
            vm.input = vm.input.concat("😐");
        }
        // Funcion si presiona el boton del emoji cara cute            
        function cute(){
            vm.input = vm.input.concat("😊");
        }
        // Funcion si presiona el boton del emoji cara enojado            
        function annoyed(){
            vm.input = vm.input.concat("😒");
        }
        // Funcion si presiona el boton del emoji corazon            
        function heart(){
            vm.input = vm.input.concat("❤️");
        }        
        // Funcion si presiona el boton del emoji cara enamorado            
        function love(){ 
            vm.input = vm.input.concat("😍");
        }
        // Funcion si presiona el boton del emoji cara winkle
        function winkle(){
            vm.input = vm.input.concat("😉");
        }
        // Funcion si presiona el boton del emoji cara meh
        function meh(){
            vm.input = vm.input.concat("😕");
        }
        // Funcion si presiona el boton del emoji cara flat2
        function flat2(){
            vm.input = vm.input.concat("😑");
        }
        // Funcion si presiona el boton del emoji cara sorprendido
        function surprised(){
            vm.input = vm.input.concat("😮");
        }
    }]);