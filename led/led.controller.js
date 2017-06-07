angular.module('app')
    .controller('LedController', [ 'LedService','FlashService', function (LedService, FlashService) {
        var vm = this;
        
        FlashService.Success("Success");
        
        
        vm.sendMessage = sendMessage;
        
        
        function sendMessage(){
                    console.log(vm.input)
            console.log("asd")

        }

    }]);