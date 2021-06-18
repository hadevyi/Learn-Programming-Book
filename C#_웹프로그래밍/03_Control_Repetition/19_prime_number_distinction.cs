using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PrimeNumberDistinction
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
                bool bData01 = false;
                uint iData01 = uint.Parse(textBox1.Text);

                for (uint i = 2; i < iData01; i++)
                {
                    if ((iData01 % i) == 0)
                    {
                        bData01 = true;
                    }
                }

                if (bData01)
                {
                    label3.Text = iData01 + "은 소수가 아닙니다!";
                }
                else
                {
                    label3.Text = iData01 + "은 소수 입니다!";
                }

            }
            catch (Exception ex)
            {
                label3.Text = ex.Message + "\n다시 입력하세요!";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
