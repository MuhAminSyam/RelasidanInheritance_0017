#ifndef IBU_H
#define IBU_H

class ibu
{
public:
    string nama;
    vector<anak *> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "ibu\" " << nama << "\" " << " ada\n";
    }
    ~ibu()
    {
        cout << "ibu\" " << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak *);
    void cetakAnak();
};

void ibu::cetakAnak()
{
    cout << "daftar anak dari \"" << this->nama << "\":\n ";
    for (auto &a : daftar_anak)
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}
#endif
