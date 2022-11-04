int main(){
    int x, y;
    // su singola espressione non sono richieste le graffe
    if (x==8)
    y=x+8;
    
    if (x==7){
    y=x+7;
    }


    if (x==6){
        y=x+6;
    }else{
        y=++x;
    }
    
    return 0;
}