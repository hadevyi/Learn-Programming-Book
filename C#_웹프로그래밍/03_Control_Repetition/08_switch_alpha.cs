using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SWITCH_ALPHA
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
                char sData01 = char.Parse(textBox1.Text);

                if (sData01 >= 'a' && sData01 <= 'z' || sData01 >= 'A' && sData01 <= 'Z')
                {
                    switch (sData01)
                    {
                        case 'a':
                        case 'e':
                        case 'i':
                        case 'o':
                        case 'u':
                        case 'y':

                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U':
                        case 'Y':
                            label3.Text = "\"" + sData01 + "\" is a vowel";
                            break;
                        default:
                            label3.Text = "\"" + sData01 + "\" is a consonant";
                            break;
                    }
                }
                else
                {
                    label3.Text = "\"" + sData01 + "\" 을 입력하였습니다.\n영문 알파벳 한글자를 입력하세요!";
                }
            }
            catch
            {
                label3.Text = "문자열의 길이는 1자여야 합니다.";
            }
        }
    }
}
