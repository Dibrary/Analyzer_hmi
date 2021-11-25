namespace Analyzer_hmi
{
    partial class Calibration
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.zero_calibration_button = new System.Windows.Forms.Button();
            this.factor_textBox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.ratio_calibration_button = new System.Windows.Forms.Button();
            this.ratio_textBox = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(22, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(342, 48);
            this.label1.TabIndex = 5;
            this.label1.Text = "CALIBRATION";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.zero_calibration_button);
            this.groupBox1.Controls.Add(this.factor_textBox);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Location = new System.Drawing.Point(30, 89);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(244, 306);
            this.groupBox1.TabIndex = 6;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "ZERO CALIBRATION";
            // 
            // zero_calibration_button
            // 
            this.zero_calibration_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.zero_calibration_button.Location = new System.Drawing.Point(23, 205);
            this.zero_calibration_button.Name = "zero_calibration_button";
            this.zero_calibration_button.Size = new System.Drawing.Size(190, 76);
            this.zero_calibration_button.TabIndex = 6;
            this.zero_calibration_button.Text = "SEND";
            this.zero_calibration_button.UseVisualStyleBackColor = true;
            // 
            // factor_textBox
            // 
            this.factor_textBox.Location = new System.Drawing.Point(102, 47);
            this.factor_textBox.Name = "factor_textBox";
            this.factor_textBox.Size = new System.Drawing.Size(100, 21);
            this.factor_textBox.TabIndex = 7;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(21, 50);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(54, 12);
            this.label2.TabIndex = 6;
            this.label2.Text = "FACTOR";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.ratio_calibration_button);
            this.groupBox2.Controls.Add(this.ratio_textBox);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Location = new System.Drawing.Point(315, 89);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(244, 306);
            this.groupBox2.TabIndex = 7;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "RATIO CALIBRATION";
            // 
            // ratio_calibration_button
            // 
            this.ratio_calibration_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.ratio_calibration_button.Location = new System.Drawing.Point(23, 205);
            this.ratio_calibration_button.Name = "ratio_calibration_button";
            this.ratio_calibration_button.Size = new System.Drawing.Size(190, 76);
            this.ratio_calibration_button.TabIndex = 6;
            this.ratio_calibration_button.Text = "SEND";
            this.ratio_calibration_button.UseVisualStyleBackColor = true;
            // 
            // ratio_textBox
            // 
            this.ratio_textBox.Location = new System.Drawing.Point(102, 47);
            this.ratio_textBox.Name = "ratio_textBox";
            this.ratio_textBox.Size = new System.Drawing.Size(100, 21);
            this.ratio_textBox.TabIndex = 7;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(21, 50);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(54, 12);
            this.label3.TabIndex = 6;
            this.label3.Text = "FACTOR";
            // 
            // Calibration
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(605, 429);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.label1);
            this.Name = "Calibration";
            this.Text = "Calibration";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button zero_calibration_button;
        private System.Windows.Forms.TextBox factor_textBox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button ratio_calibration_button;
        private System.Windows.Forms.TextBox ratio_textBox;
        private System.Windows.Forms.Label label3;
    }
}