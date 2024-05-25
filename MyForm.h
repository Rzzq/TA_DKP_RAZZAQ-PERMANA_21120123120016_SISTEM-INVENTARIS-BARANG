#pragma once

namespace RentAndInventoryApp {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            // Mengatur kolom untuk DataGridView
            dataGridView1->ColumnCount = 4;
            dataGridView1->Columns[0]->Name = "Item Name";
            dataGridView1->Columns[1]->Name = "Quantity";
            dataGridView1->Columns[2]->Name = "Rent Status";
            dataGridView1->Columns[3]->Name = "Category";

            // Inisialisasi inventory
            inventory = gcnew Dictionary<String^, Tuple<int, String^, String^>^>();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::TextBox^ txtItemName;
        System::Windows::Forms::TextBox^ txtQuantity;
        System::Windows::Forms::Label^ lblItemName;
        System::Windows::Forms::Button^ btnAddStock;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::Label^ lblQuantity;
        System::Windows::Forms::Button^ btnRemoveStock;
        System::Windows::Forms::Label^ lblCategory;
        System::Windows::Forms::TextBox^ txtCategory;
        System::Windows::Forms::Label^ label1;

        // Inventory dictionary
        Dictionary<String^, Tuple<int, String^, String^>^>^ inventory;
    private: System::Windows::Forms::Button^ btnDelete;




        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->txtItemName = (gcnew System::Windows::Forms::TextBox());
            this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
            this->txtCategory = (gcnew System::Windows::Forms::TextBox());
            this->lblItemName = (gcnew System::Windows::Forms::Label());
            this->btnAddStock = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->lblQuantity = (gcnew System::Windows::Forms::Label());
            this->btnRemoveStock = (gcnew System::Windows::Forms::Button());
            this->lblCategory = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnDelete = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // txtItemName
            // 
            this->txtItemName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->txtItemName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtItemName->Location = System::Drawing::Point(301, 175);
            this->txtItemName->Margin = System::Windows::Forms::Padding(3, 4, 3, 3);
            this->txtItemName->Multiline = true;
            this->txtItemName->Name = L"txtItemName";
            this->txtItemName->Size = System::Drawing::Size(200, 32);
            this->txtItemName->TabIndex = 0;
            // 
            // txtQuantity
            // 
            this->txtQuantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->txtQuantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtQuantity->Location = System::Drawing::Point(301, 223);
            this->txtQuantity->Multiline = true;
            this->txtQuantity->Name = L"txtQuantity";
            this->txtQuantity->Size = System::Drawing::Size(200, 32);
            this->txtQuantity->TabIndex = 2;
            this->txtQuantity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtQuantity_KeyPress);
            // 
            // txtCategory
            // 
            this->txtCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->txtCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCategory->Location = System::Drawing::Point(301, 272);
            this->txtCategory->Multiline = true;
            this->txtCategory->Name = L"txtCategory";
            this->txtCategory->Size = System::Drawing::Size(200, 32);
            this->txtCategory->TabIndex = 3;
            // 
            // lblItemName
            // 
            this->lblItemName->AutoSize = true;
            this->lblItemName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblItemName->Location = System::Drawing::Point(159, 178);
            this->lblItemName->Name = L"lblItemName";
            this->lblItemName->Size = System::Drawing::Size(123, 20);
            this->lblItemName->TabIndex = 21;
            this->lblItemName->Text = L"Nama Barang:";
            // 
            // btnAddStock
            // 
            this->btnAddStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddStock->Location = System::Drawing::Point(315, 331);
            this->btnAddStock->Name = L"btnAddStock";
            this->btnAddStock->Size = System::Drawing::Size(165, 35);
            this->btnAddStock->TabIndex = 4;
            this->btnAddStock->Text = L"Add Stock/Update";
            this->btnAddStock->UseVisualStyleBackColor = true;
            this->btnAddStock->Click += gcnew System::EventHandler(this, &MyForm::btnAddStock_Click);
            // 
            // dataGridView1
            // 
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1, 2, 2, 1);
            this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView1->ColumnHeadersHeight = 29;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
            this->dataGridView1->Location = System::Drawing::Point(554, 178);
            this->dataGridView1->Name = L"dataGridView1";
            dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
            dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
            this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
            this->dataGridView1->Size = System::Drawing::Size(444, 288);
            this->dataGridView1->TabIndex = 11;
            // 
            // lblQuantity
            // 
            this->lblQuantity->AutoSize = true;
            this->lblQuantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblQuantity->Location = System::Drawing::Point(159, 226);
            this->lblQuantity->Name = L"lblQuantity";
            this->lblQuantity->Size = System::Drawing::Size(101, 20);
            this->lblQuantity->TabIndex = 7;
            this->lblQuantity->Text = L"Banyaknya:";
            // 
            // btnRemoveStock
            // 
            this->btnRemoveStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRemoveStock->Location = System::Drawing::Point(315, 379);
            this->btnRemoveStock->Name = L"btnRemoveStock";
            this->btnRemoveStock->Size = System::Drawing::Size(165, 35);
            this->btnRemoveStock->TabIndex = 5;
            this->btnRemoveStock->Text = L"Remove Stock";
            this->btnRemoveStock->UseVisualStyleBackColor = true;
            this->btnRemoveStock->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveStock_Click);
            // 
            // lblCategory
            // 
            this->lblCategory->AutoSize = true;
            this->lblCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblCategory->Location = System::Drawing::Point(159, 275);
            this->lblCategory->Name = L"lblCategory";
            this->lblCategory->Size = System::Drawing::Size(81, 20);
            this->lblCategory->TabIndex = 9;
            this->lblCategory->Text = L"Kategori:";
            this->lblCategory->Click += gcnew System::EventHandler(this, &MyForm::lblCategory_Click_1);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Felix Titling", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(215, 61);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(699, 57);
            this->label1->TabIndex = 22;
            this->label1->Text = L"Data Inventaris Barang";
            // 
            // btnDelete
            // 
            this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDelete->Location = System::Drawing::Point(315, 431);
            this->btnDelete->Name = L"btnDelete";
            this->btnDelete->Size = System::Drawing::Size(165, 35);
            this->btnDelete->TabIndex = 23;
            this->btnDelete->Text = L"Delete Item";
            this->btnDelete->UseVisualStyleBackColor = true;
            this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlLight;
            this->ClientSize = System::Drawing::Size(1117, 606);
            this->Controls->Add(this->btnDelete);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->lblCategory);
            this->Controls->Add(this->btnRemoveStock);
            this->Controls->Add(this->lblQuantity);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->btnAddStock);
            this->Controls->Add(this->lblItemName);
            this->Controls->Add(this->txtCategory);
            this->Controls->Add(this->txtQuantity);
            this->Controls->Add(this->txtItemName);
            this->Name = L"MyForm";
            this->Text = L"Rent and Inventory Management System";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        // Method untuk hanya mengizinkan angka dan karakter kontrol pada kotak teks Kuantitas
        System::Void txtQuantity_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
        {
            if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back)
            {
                e->Handled = true;
            }
        }

        // Method untuk menambahkan stok
        System::Void btnAddStock_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Mendapatkan nilai dari kotak teks
            String^ itemName = txtItemName->Text;
            int quantity;
            if (!Int32::TryParse(txtQuantity->Text, quantity) || quantity < 0)
            {
                MessageBox::Show("Masukkan jumlah yang valid.");
                return;
            }
            String^ category = txtCategory->Text;
            String^ rentStatus = quantity == 0 ? "Tidak Ada" : "Ada";

            Tuple<String^, String^>^ key = gcnew Tuple<String^, String^>(itemName, category);

            // Memeriksa apakah item sudah ada di inventory
            if (inventory->ContainsKey(itemName))
            {
                // Jika item sudah ada, periksa apakah kategorinya sama
                Tuple<int, String^, String^>^ existingItem = inventory[itemName];
                if (existingItem->Item3 == category)
                {
                    // Jika kategorinya sama, tambahkan kuantitas
                    int newQuantity = existingItem->Item1 + quantity;
                    String^ newRentStatus = newQuantity == 0 ? "Tidak Ada" : "Ada";
                    inventory[itemName] = gcnew Tuple<int, String^, String^>(newQuantity, newRentStatus, category);
                }
                else
                {
                    // Jika kategorinya berbeda, tambahkan baris baru
                    MessageBox::Show("Item dengan nama yang sama sudah ada dalam kategori yang berbeda. Menambahkan baris baru.");
                    inventory[itemName + "_baru"] = gcnew Tuple<int, String^, String^>(quantity, rentStatus, category);
                }
            }
            else
            {
                // Menambahkan item baru ke inventory
                inventory[itemName] = gcnew Tuple<int, String^, String^>(quantity, rentStatus, category);
            }

            // Memperbarui DataGridView
            UpdateDataGridView();

            // Mengosongkan kotak teks
            ClearInputFields();
        }




        // Method untuk mengurangi stok
        System::Void btnRemoveStock_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Memastikan bahwa ada baris yang dipilih
            if (dataGridView1->SelectedRows->Count > 0)
            {
                // Mendapatkan nama barang dan kategori dari baris yang dipilih dalam DataGridView
                String^ itemName = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
                String^ category = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
                Tuple<String^, String^>^ key = gcnew Tuple<String^, String^>(itemName, category);

                int quantity;
                if (!Int32::TryParse(txtQuantity->Text, quantity) || quantity < 0)
                {
                    MessageBox::Show("Masukkan jumlah yang valid.");
                    return;
                }

                if (inventory->ContainsKey(itemName))
                {
                    Tuple<int, String^, String^>^ existingItem = inventory[itemName];
                    int newQuantity = existingItem->Item1 - quantity;
                    String^ newRentStatus = newQuantity == 0 ? "Tidak Ada" : "Ada";

                    if (newQuantity < 0)
                    {
                        MessageBox::Show("Kuantitas tidak boleh negatif.");
                        return;
                    }
                    else if (newQuantity == 0)
                    {
                        // Jika kuantitas nol, ubah status sewa menjadi "Tidak Ada"
                        inventory[itemName] = gcnew Tuple<int, String^, String^>(newQuantity, newRentStatus, category);
                    }
                    else
                    {
                        // Jika kuantitas lebih dari nol, perbarui kuantitas dan status sewa
                        inventory[itemName] = gcnew Tuple<int, String^, String^>(newQuantity, newRentStatus, category);
                    }

                    // Memperbarui DataGridView
                    UpdateDataGridView();

                    // Mengosongkan kotak teks
                    ClearInputFields();
                }
                else
                {
                    MessageBox::Show("Item tidak ditemukan.");
                }
            }
            else
            {
                MessageBox::Show("Pilih item yang ingin dihapus dari tabel.");
            }
        }

        // Method untuk menghapus item secara permanen
        System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Memastikan bahwa ada baris yang dipilih
            if (dataGridView1->SelectedRows->Count > 0)
            {
                // Menghapus item dari inventory dan DataGridView
                for each (DataGridViewRow ^ row in dataGridView1->SelectedRows)
                {
                    String^ itemName = row->Cells[0]->Value->ToString();
                    String^ category = row->Cells[3]->Value->ToString();
                    Tuple<String^, String^>^ key = gcnew Tuple<String^, String^>(itemName, category);

                    if (inventory->ContainsKey(itemName))
                    {
                        inventory->Remove(itemName);
                    }
                    dataGridView1->Rows->Remove(row);
                }
            }
            else
            {
                MessageBox::Show("Pilih item yang ingin dihapus dari tabel.");
            }
        }

        // Method untuk memperbarui DataGridView
        void UpdateDataGridView()
        {
            dataGridView1->Rows->Clear();
            for each (KeyValuePair<String^, Tuple<int, String^, String^>^> ^ kvp in inventory)
            {
                String^ itemName = kvp->Key;
                int quantity = kvp->Value->Item1;
                String^ rentStatus = kvp->Value->Item2;
                String^ category = kvp->Value->Item3;

                array<String^>^ rowValues = { itemName, quantity.ToString(), rentStatus, category };
                dataGridView1->Rows->Add(rowValues);
            }
        }

        // Method untuk mengosongkan kotak teks
        void ClearInputFields()
        {
            txtItemName->Clear();
            txtQuantity->Clear();
            txtCategory->Clear();
        }


    private: System::Void lblCategory_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void lblCategory_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }

};
}
