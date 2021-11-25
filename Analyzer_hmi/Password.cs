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
    public partial class Password : Form
    {
        public Password()
        {
            InitializeComponent();
        }

        private void enter_button_Click(object sender, EventArgs e)
        {
            String password = "1234";

            if ((comboBox1.Text + comboBox2.Text + comboBox3.Text + comboBox4.Text) == password)
            {
                Operation operation_view = new Operation();
                operation_view.ShowDialog();

            }
            else
            {
                MessageBox.Show("Password is Wrong");
            }

        }
    }
}
