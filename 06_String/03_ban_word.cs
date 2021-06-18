using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BanWords
{
    public partial class Form1 : Form
    {
        string[] sUnacceptableWords;

        public Form1()
        {
            InitializeComponent();

            sUnacceptableWords = new string[4];
            sUnacceptableWords[0] = "바보";
            sUnacceptableWords[1] = "메롱";
            sUnacceptableWords[2] = "님아";
            sUnacceptableWords[3] = "8억";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string sData01 = textBox1.Text;

            foreach (string sUAW in sUnacceptableWords)
            {
                int iData01 = sData01.IndexOf(sUAW);

                while (iData01 >= 0)
                {
                    string sData02 = sData01.Substring(0, iData01);
                    string sData03 = sData01.Substring(iData01 + "메롱".Length);

                    sData01 = sData02 + "(금지어)" + sData03;
                    iData01 = sData01.IndexOf(sUAW);
                }

                textBox1.Text = sData01;
            }
        }
    }
}
