namespace Analyzer_hmi
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.benzene_textBox = new System.Windows.Forms.TextBox();
            this.toluene_textBox = new System.Windows.Forms.TextBox();
            this.xylene_textBox = new System.Windows.Forms.TextBox();
            this.phenol_textBox = new System.Windows.Forms.TextBox();
            this.benzene_button = new System.Windows.Forms.Button();
            this.toluene_button = new System.Windows.Forms.Button();
            this.xylene_button = new System.Windows.Forms.Button();
            this.phenol_button = new System.Windows.Forms.Button();
            this.enter_button = new System.Windows.Forms.Button();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.phenol_button);
            this.groupBox1.Controls.Add(this.xylene_button);
            this.groupBox1.Controls.Add(this.toluene_button);
            this.groupBox1.Controls.Add(this.benzene_button);
            this.groupBox1.Controls.Add(this.phenol_textBox);
            this.groupBox1.Controls.Add(this.xylene_textBox);
            this.groupBox1.Controls.Add(this.toluene_textBox);
            this.groupBox1.Controls.Add(this.benzene_textBox);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Location = new System.Drawing.Point(31, 73);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(238, 232);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "ELEMENT";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(23, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(122, 48);
            this.label1.TabIndex = 0;
            this.label1.Text = "TOC";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(6, 43);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(70, 12);
            this.label2.TabIndex = 0;
            this.label2.Text = "BENZENE";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(6, 90);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(69, 12);
            this.label3.TabIndex = 1;
            this.label3.Text = "TOLUENE";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label4.Location = new System.Drawing.Point(6, 140);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(59, 12);
            this.label4.TabIndex = 2;
            this.label4.Text = "XYLENE";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.Location = new System.Drawing.Point(6, 190);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(60, 12);
            this.label5.TabIndex = 3;
            this.label5.Text = "PHENOL";
            // 
            // benzene_textBox
            // 
            this.benzene_textBox.Location = new System.Drawing.Point(75, 40);
            this.benzene_textBox.Name = "benzene_textBox";
            this.benzene_textBox.Size = new System.Drawing.Size(100, 21);
            this.benzene_textBox.TabIndex = 4;
            // 
            // toluene_textBox
            // 
            this.toluene_textBox.Location = new System.Drawing.Point(75, 87);
            this.toluene_textBox.Name = "toluene_textBox";
            this.toluene_textBox.Size = new System.Drawing.Size(100, 21);
            this.toluene_textBox.TabIndex = 5;
            // 
            // xylene_textBox
            // 
            this.xylene_textBox.Location = new System.Drawing.Point(75, 137);
            this.xylene_textBox.Name = "xylene_textBox";
            this.xylene_textBox.Size = new System.Drawing.Size(100, 21);
            this.xylene_textBox.TabIndex = 6;
            // 
            // phenol_textBox
            // 
            this.phenol_textBox.Location = new System.Drawing.Point(75, 187);
            this.phenol_textBox.Name = "phenol_textBox";
            this.phenol_textBox.Size = new System.Drawing.Size(100, 21);
            this.phenol_textBox.TabIndex = 7;
            // 
            // benzene_button
            // 
            this.benzene_button.Location = new System.Drawing.Point(192, 40);
            this.benzene_button.Name = "benzene_button";
            this.benzene_button.Size = new System.Drawing.Size(25, 23);
            this.benzene_button.TabIndex = 1;
            this.benzene_button.UseVisualStyleBackColor = true;
            // 
            // toluene_button
            // 
            this.toluene_button.Location = new System.Drawing.Point(192, 85);
            this.toluene_button.Name = "toluene_button";
            this.toluene_button.Size = new System.Drawing.Size(25, 23);
            this.toluene_button.TabIndex = 8;
            this.toluene_button.UseVisualStyleBackColor = true;
            // 
            // xylene_button
            // 
            this.xylene_button.Location = new System.Drawing.Point(192, 135);
            this.xylene_button.Name = "xylene_button";
            this.xylene_button.Size = new System.Drawing.Size(25, 23);
            this.xylene_button.TabIndex = 9;
            this.xylene_button.UseVisualStyleBackColor = true;
            // 
            // phenol_button
            // 
            this.phenol_button.Location = new System.Drawing.Point(192, 185);
            this.phenol_button.Name = "phenol_button";
            this.phenol_button.Size = new System.Drawing.Size(25, 23);
            this.phenol_button.TabIndex = 10;
            this.phenol_button.UseVisualStyleBackColor = true;
            // 
            // enter_button
            // 
            this.enter_button.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.enter_button.Location = new System.Drawing.Point(383, 18);
            this.enter_button.Name = "enter_button";
            this.enter_button.Size = new System.Drawing.Size(193, 89);
            this.enter_button.TabIndex = 1;
            this.enter_button.Text = "ENTER";
            this.enter_button.UseVisualStyleBackColor = true;
            this.enter_button.Click += new System.EventHandler(this.enter_button_Click);
            // 
            // richTextBox1
            // 
            this.richTextBox1.Location = new System.Drawing.Point(31, 311);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(545, 114);
            this.richTextBox1.TabIndex = 2;
            this.richTextBox1.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(605, 429);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.enter_button);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Wellas TOC";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox phenol_textBox;
        private System.Windows.Forms.TextBox xylene_textBox;
        private System.Windows.Forms.TextBox toluene_textBox;
        private System.Windows.Forms.TextBox benzene_textBox;
        private System.Windows.Forms.Button phenol_button;
        private System.Windows.Forms.Button xylene_button;
        private System.Windows.Forms.Button toluene_button;
        private System.Windows.Forms.Button benzene_button;
        private System.Windows.Forms.Button enter_button;
        private System.Windows.Forms.RichTextBox richTextBox1;
    }
}

