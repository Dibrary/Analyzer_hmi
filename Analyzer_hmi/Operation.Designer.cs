namespace Analyzer_hmi
{
    partial class Operation
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.start_button = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.eventlog_button = new System.Windows.Forms.Button();
            this.calibration_button = new System.Windows.Forms.Button();
            this.maintenance_button = new System.Windows.Forms.Button();
            this.setup_button = new System.Windows.Forms.Button();
            this.emergency_stop_button = new System.Windows.Forms.Button();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.status_button = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(26, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(302, 48);
            this.label1.TabIndex = 2;
            this.label1.Text = "OPERATION";
            // 
            // start_button
            // 
            this.start_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.start_button.Location = new System.Drawing.Point(22, 100);
            this.start_button.Name = "start_button";
            this.start_button.Size = new System.Drawing.Size(158, 83);
            this.start_button.TabIndex = 3;
            this.start_button.Text = "START";
            this.start_button.UseVisualStyleBackColor = true;
            this.start_button.Click += new System.EventHandler(this.start_button_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.eventlog_button);
            this.groupBox1.Controls.Add(this.calibration_button);
            this.groupBox1.Controls.Add(this.maintenance_button);
            this.groupBox1.Controls.Add(this.setup_button);
            this.groupBox1.Location = new System.Drawing.Point(350, 100);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(243, 317);
            this.groupBox1.TabIndex = 4;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "options";
            // 
            // eventlog_button
            // 
            this.eventlog_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.eventlog_button.Location = new System.Drawing.Point(18, 227);
            this.eventlog_button.Name = "eventlog_button";
            this.eventlog_button.Size = new System.Drawing.Size(210, 63);
            this.eventlog_button.TabIndex = 11;
            this.eventlog_button.Text = "EVENT LOG";
            this.eventlog_button.UseVisualStyleBackColor = true;
            this.eventlog_button.Click += new System.EventHandler(this.eventlog_button_Click);
            // 
            // calibration_button
            // 
            this.calibration_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.calibration_button.Location = new System.Drawing.Point(18, 158);
            this.calibration_button.Name = "calibration_button";
            this.calibration_button.Size = new System.Drawing.Size(210, 63);
            this.calibration_button.TabIndex = 10;
            this.calibration_button.Text = "CALIBRATION";
            this.calibration_button.UseVisualStyleBackColor = true;
            this.calibration_button.Click += new System.EventHandler(this.calibration_button_Click);
            // 
            // maintenance_button
            // 
            this.maintenance_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.maintenance_button.Location = new System.Drawing.Point(18, 89);
            this.maintenance_button.Name = "maintenance_button";
            this.maintenance_button.Size = new System.Drawing.Size(210, 63);
            this.maintenance_button.TabIndex = 9;
            this.maintenance_button.Text = "MAINTENANCE";
            this.maintenance_button.UseVisualStyleBackColor = true;
            this.maintenance_button.Click += new System.EventHandler(this.maintenance_button_Click);
            // 
            // setup_button
            // 
            this.setup_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.setup_button.Location = new System.Drawing.Point(18, 20);
            this.setup_button.Name = "setup_button";
            this.setup_button.Size = new System.Drawing.Size(210, 63);
            this.setup_button.TabIndex = 8;
            this.setup_button.Text = "SET UP";
            this.setup_button.UseVisualStyleBackColor = true;
            this.setup_button.Click += new System.EventHandler(this.setup_button_Click);
            // 
            // emergency_stop_button
            // 
            this.emergency_stop_button.BackColor = System.Drawing.Color.Red;
            this.emergency_stop_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.emergency_stop_button.ForeColor = System.Drawing.Color.White;
            this.emergency_stop_button.Location = new System.Drawing.Point(22, 211);
            this.emergency_stop_button.Name = "emergency_stop_button";
            this.emergency_stop_button.Size = new System.Drawing.Size(158, 83);
            this.emergency_stop_button.TabIndex = 5;
            this.emergency_stop_button.Text = "EMERGENCY\r\nSTOP";
            this.emergency_stop_button.UseVisualStyleBackColor = false;
            this.emergency_stop_button.Click += new System.EventHandler(this.emergency_stop_button_Click);
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(393, 73);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(200, 21);
            this.dateTimePicker1.TabIndex = 6;
            // 
            // status_button
            // 
            this.status_button.Font = new System.Drawing.Font("굴림", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.status_button.Location = new System.Drawing.Point(552, 17);
            this.status_button.Name = "status_button";
            this.status_button.Size = new System.Drawing.Size(41, 40);
            this.status_button.TabIndex = 7;
            this.status_button.UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(24, 297);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(185, 12);
            this.label2.TabIndex = 8;
            this.label2.Text = "반드시 긴급한 순간에만 누르세요";
            // 
            // Operation
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(605, 429);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.status_button);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.emergency_stop_button);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.start_button);
            this.Controls.Add(this.label1);
            this.Name = "Operation";
            this.Text = "Operation";
            this.groupBox1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button start_button;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button emergency_stop_button;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.Button status_button;
        private System.Windows.Forms.Button eventlog_button;
        private System.Windows.Forms.Button calibration_button;
        private System.Windows.Forms.Button maintenance_button;
        private System.Windows.Forms.Button setup_button;
        private System.Windows.Forms.Label label2;
    }
}