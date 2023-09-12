void maju() {
  digitalWrite(BAN_KIRI1, HIGH);
  digitalWrite(BAN_KIRI2, LOW);
  digitalWrite(BAN_KANAN1, HIGH);
  digitalWrite(BAN_KANAN2, LOW);
}

void mundur() {
  digitalWrite(BAN_KIRI1, LOW);
  digitalWrite(BAN_KIRI2, HIGH);
  digitalWrite(BAN_KANAN1, LOW);
  digitalWrite(BAN_KANAN2, HIGH);
}

void kiri() {
  digitalWrite(BAN_KIRI1, LOW);
  digitalWrite(BAN_KIRI2, LOW);
  digitalWrite(BAN_KANAN1, HIGH);
  digitalWrite(BAN_KANAN2, LOW);
}

void kanan() {
  digitalWrite(BAN_KIRI1, HIGH);
  digitalWrite(BAN_KIRI2, LOW);
  digitalWrite(BAN_KANAN1, LOW);
  digitalWrite(BAN_KANAN2, LOW);
}

void putar_kiri() {
  digitalWrite(BAN_KIRI1, LOW);
  digitalWrite(BAN_KIRI2, HIGH);
  digitalWrite(BAN_KANAN1, HIGH);
  digitalWrite(BAN_KANAN2, LOW);
}

void putar_kanan() {
  digitalWrite(BAN_KIRI1, HIGH);
  digitalWrite(BAN_KIRI2, LOW);
  digitalWrite(BAN_KANAN1, LOW);
  digitalWrite(BAN_KANAN2, HIGH);
}

void stop() {
  digitalWrite(BAN_KIRI1, LOW);
  digitalWrite(BAN_KIRI2, LOW);
  digitalWrite(BAN_KANAN1, LOW);
  digitalWrite(BAN_KANAN2, LOW);
}