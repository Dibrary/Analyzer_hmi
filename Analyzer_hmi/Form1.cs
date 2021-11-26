using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Analyzer_hmi
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            benzene_button.BackColor = Color.Green;
            toluene_button.BackColor = Color.Green;
            xylene_button.BackColor = Color.Green;
            phenol_button.BackColor = Color.Green;

            benzene_textBox.Text = "2.24";
            toluene_textBox.Text = "1.12";
            xylene_textBox.Text = "0.12";
            phenol_textBox.Text = "0.03";

            benzene_textBox.ReadOnly = true;
            toluene_textBox.ReadOnly = true;
            xylene_textBox.ReadOnly = true;
            phenol_textBox.ReadOnly = true;

            richTextBox1.Text = "2021-11-20 Validation pass \n2021-11-21 Calibration pass";
            richTextBox1.ReadOnly = true;

        }

        private void enter_button_Click(object sender, EventArgs e)
        {
            Password password_view = new Password();
            password_view.ShowDialog();
        }
    }
}
