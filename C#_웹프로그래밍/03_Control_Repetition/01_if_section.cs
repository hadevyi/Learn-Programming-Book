using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IF_SECTION
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
                if (textBox1.Text == "")
                    textBox2.Text = "숫자를 입력 하세요!";

                else
                {
                    int iData01 = int.Parse(textBox1.Text);

                    if (iData01 < 0)
                    {
                        textBox2.Text = "0보다 작은수를 입력햇습니다!";
                    }
                    else if (iData01 < 10)
                    {
                        textBox2.Text = "0과 10사이 수를 입력햇습니다!";
                    }
                    else if (iData01 < 50)
                    {
                        textBox2.Text = "10과 50사이 수를 입력햇습니다!";
                    }
                    else if (iData01 < 100)
                    {
                        textBox2.Text = "50과100사이 수를 입력햇습니다!";
                    }
                    else if (iData01 >= 100)
                    {
                        textBox2.Text = "100보다 큰수를 입력햇습니다!";
                    }
                }

            }
            catch (Exception ex)
            {
                textBox2.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
