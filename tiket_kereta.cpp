#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printTicket(const string& name, const string& idNumber, const string& trainName, const string& departureStation, const string& departureTime, const string& arrivalStation, const string& arrivalTime, const string& seatClass, const string& seatNumber, const string& bookingCode) {
    cout << "==========================================================\n";
    cout << "\t\tKERETA API INDONESIA\n";
    cout << "==========================================================\n";
    cout << "Nama / Name: " << name << endl;
    cout << "Nomor Identitas / ID Number: " << idNumber << endl;
    cout << "Kereta Api / Train: " << trainName << endl;
    cout << "Berangkat / Departure: " << departureStation << "\t" << departureTime << endl;
    cout << "Tiba / Arrival: " << arrivalStation << "\t" << arrivalTime << endl;
    cout << "Tipe Penumpang / Pax Type: UMUM\n";
    cout << "No Tempat Duduk / Seat Number: " << seatClass << " " << seatNumber << endl;
    cout << "Kode Booking / Booking Code: " << bookingCode << endl;
    cout << "==========================================================\n";
    cout << "\tTerima kasih telah menggunakan Kereta Api Indonesia\n";
    cout << "==========================================================\n";
}

int main() {
    string name, idNumber, trainName, departureStation, departureTime;
    string arrivalStation, arrivalTime, seatClass, seatNumber, bookingCode;

    // Input data pelanggan
    cout << "Masukkan nama pelanggan: ";
    getline(cin, name);
    cout << "Masukkan nomor identitas: ";
    getline(cin, idNumber);
    cout << "Masukkan nama kereta: ";
    getline(cin, trainName);
    cout << "Masukkan stasiun keberangkatan: ";
    getline(cin, departureStation);
    cout << "Masukkan waktu keberangkatan (format HH:MM WIB): ";
    getline(cin, departureTime);
    cout << "Masukkan stasiun tujuan: ";
    getline(cin, arrivalStation);
    cout << "Masukkan waktu tiba (format HH:MM WIB): ";
    getline(cin, arrivalTime);
    cout << "Masukkan kelas tempat duduk (contoh: EKS): ";
    getline(cin, seatClass);
    cout << "Masukkan nomor tempat duduk (contoh: 12A): ";
    getline(cin, seatNumber);
    cout << "Masukkan kode booking: ";
    getline(cin, bookingCode);

    // Cetak tiket
    printTicket(name, idNumber, trainName, departureStation, departureTime, arrivalStation, arrivalTime, seatClass, seatNumber, bookingCode);

    return 0;
}
