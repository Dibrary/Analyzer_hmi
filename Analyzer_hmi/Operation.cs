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
    public partial class Operation : Form
    {
        public Operation()
        {
            InitializeComponent();
        }

        private void setup_button_Click(object sender, EventArgs e)
        {
            Setup setup_view = new Setup();
            setup_view.ShowDialog();
        }

        private void maintenance_button_Click(object sender, EventArgs e)
        {
            Maintenance maintenance_view = new Maintenance();
            maintenance_view.ShowDialog();
        }

        private void calibration_button_Click(object sender, EventArgs e)
        {
            Calibration calibration_view = new Calibration();
            calibration_view.ShowDialog();
        }

        private void eventlog_button_Click(object sender, EventArgs e)
        {
            Eventlog eventlog_view = new Eventlog();
            eventlog_view.ShowDialog();
        }

        private void emergency_stop_button_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Emergency 버튼이 눌렸습니다.");
            status_button.BackColor = Color.Red;
        }

        private void start_button_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("측정을 시작합니다.", "measure", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                MessageBox.Show("측정 시작.");
                status_button.BackColor = Color.Green;
            }
        }
    }
}
