using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm13_1
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
                uint i;
                uint num1 = uint.Parse(textBox1.Text);
                string result = "구구단 " + num1 + " 단\n\n";
                if (num1 <= 9)
                {
                    for (i = 1; i <= 9; i++)
                    {
                        result += num1 + " * " + i + " = " + (num1 * i) + '\n';
                    }
                    label3.Text = result;
                }
                else
                {
                    label3.Text = "음수를 제외한 9이하의 수를 입력하세요!";
                }
            }
            catch (Exception ee)
            {
                label3.Text = ee.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
