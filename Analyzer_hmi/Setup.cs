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
    public partial class Setup : Form
    {
        public Setup()
        {
            InitializeComponent();
        }

        private void modbus_save_button_Click(object sender, EventArgs e)
        {
            String modbus_ip_str = modbus_ip.Text; // 사용자가 입력한 Modbus IP값 가져오기.
            MessageBox.Show(modbus_ip_str);
        }
    }
}
