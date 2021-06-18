using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GlobalVariable
{
    public partial class Form1 : Form
    {
        double dData01 = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                double dData02 = double.Parse(textBox1.Text);

                dData01 += dData02;

                label1.Text = dData01.ToString();

            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                double dData02 = double.Parse(textBox1.Text);

                dData01 -= dData02;

                label1.Text = dData01.ToString();

            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                double dData02 = double.Parse(textBox1.Text);

                dData01 *= dData02;

                label1.Text = dData01.ToString();

            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                double dData02 = double.Parse(textBox1.Text);

                dData01 /= dData02;

                label1.Text = dData01.ToString();

            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            label1.Text = "0";
            textBox1.Text = "";
            dData01 = 0;
        }
    }
}
