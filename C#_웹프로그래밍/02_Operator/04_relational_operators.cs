using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RELATIONAL_OPERATORS
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                bool bData01 = iData01 > iData02;
                label1.Text = ">";
                label2.Text = "결과는 " + bData01 + " 입니다";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                bool bData02 = iData01 >= iData02;
                label1.Text = ">=";
                label2.Text = "결과는 " + bData02 + " 입니다";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                bool bData03 = iData01 == iData02;
                label1.Text = "==";
                label2.Text = "결과는 " + bData03 + " 입니다";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                bool bData04 = iData01 != iData02;
                label1.Text = "!=";
                label2.Text = "결과는 " + bData04 + " 입니다";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                bool bData05 = iData01 <= iData02;
                label1.Text = "<=";
                label2.Text = "결과는 " + bData05 + " 입니다";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                bool bData06 = iData01 < iData02;
                label1.Text = "<";
                label2.Text = "결과는 " + bData06 + " 입니다";
            }
            catch
            {
                label1.Text = "???";
                label2.Text = "결과에 이상이 있습니다.";
            }
        }
    }
}
