void servo_putar_kekanan() {
    for(int i = 0; i <= 360; i++) {
        if(i > 360) i = 0;
        sudutServoPutar = i;
        servoPutar.write(sudutServoPutar);
        delay(15);
    }
}

void servo_putar_kekiri() {
    for(int i = 360; i >= 0; i--) {
        if(i < 0) i = 360;
        sudutServoPutar = i;
        servoPutar.write(sudutServoPutar);
        delay(15);
    }
}

void servo_putar_stop() {
    servoPutar.write(sudutServoPutar);
}

void servo_lengan_kekanan() {
    for(int i = 0; i <= 180; i++) {
        if(i > 180) i = 0;
        sudutServoLengan = i;
        servoLengan.write(sudutServoLengan);
        delay(15);
    }
}

void servo_lengan_kekiri() {
    for(int i = 180; i >= 0; i--) {
        if(i < 0) i = 180;
        sudutServoLengan = i;
        servoLengan.write(sudutServoLengan);
        delay(15);
    }
}

void servo_lengan_stop() {
    servoLengan.write(sudutServoLengan);
}

void servo_bahu_kekanan() {
    for(int i = 0; i <= 180; i++) {
        if(i > 180) i = 0;
        sudutServoBahu = i;
        servoBahu.write(sudutServoBahu);
        delay(15);
    }
}

void servo_bahu_kekiri() {
    for(int i = 180; i >= 0; i--) {
        if(i < 0) i = 180;
        sudutServoBahu = i;
        servoBahu.write(sudutServoBahu);
        delay(15);
    }
}

void servo_bahu_stop() {
    servoBahu.write(sudutServoBahu);
}

void servo_capit_kekanan() {
    for(int i = 0; i <= 180; i++) {
        if(i > 180) i = 0;
        sudutServoCapit = i;
        servoCapit.write(sudutServoCapit);
        delay(15);
    }
}

void servo_capit_kekiri() {
    for(int i = 180; i >= 0; i--) {
        if(i < 0) i = 180;
        sudutServoCapit = i;
        servoCapit.write(sudutServoCapit);
        delay(15);
    }
}

void servo_capit_stop() {
    servoCapit.write(sudutServoCapit);
}
