



switch(bondType){
    case 1:
        dates();
        leapYr();
        break;
    
    case 2:
        yield();
        matuarity();
        break;
    
    case 4:
        price();
        roi();
        break;
    
    case 5:
        files();
        save();
        break;
    
    case 16:
        retrieve();
        screen();
        break;
    default:
        print("invalid bondType")
}



}