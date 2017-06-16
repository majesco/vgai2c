angular.module('app')
    .controller('LedController', [ 'LedService','FlashService', function (LedService, FlashService) {
        var vm = this;

        vm.sendMessage = sendMessage;
        vm.smiley = smiley;
        vm.flat = flat;
        vm.cute = cute;
        vm.annoyed = annoyed;
        vm.heart = heart;
        vm.love = love
        vm.winkle = winkle;
        vm.meh =meh;
        vm.flat2 = flat2;
        vm.surprised = surprised;

        function sendMessage(){

            var len = vm.input.length; 
            if (len>20){
                FlashService.Error("Mensaje no debe ser mayor a 20 caracteres");
                return;
            }

            var message = vm.input;

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
            var send = {mensaje: message};
            console.log(send);

            LedService.SendMessage(send)
                .then(function(response){

                if (response.data == 1 ){
                    FlashService.Success("Se ha enviado el mensaje");
                    vm.input =" "    
                }
                else{
                    FlashService.Error("No se ha podido enviar el mensaje");       
                }

            },
                      function(respose){
                FlashService.Error("No se ha podido enviar el mensaje");

            });
        }

        function smiley(){
            vm.input = vm.input.concat("😁");
        }
        function flat(){
            vm.input = vm.input.concat("😐");
        }
        function cute(){
            vm.input = vm.input.concat("😊");
        }
        function annoyed(){
            vm.input = vm.input.concat("😒");
        }
        function heart(){
            vm.input = vm.input.concat("❤️");
        }
        function love(){
            vm.input = vm.input.concat("😍");
        }
        function winkle(){
            vm.input = vm.input.concat("😉");
        }
        function meh(){
            vm.input = vm.input.concat("😕");
        }
        function flat2(){
            vm.input = vm.input.concat("😑");
        }
        function surprised(){
            vm.input = vm.input.concat("😮");
        }
    }]);