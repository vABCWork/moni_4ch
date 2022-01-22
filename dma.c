
#include "iodefine.h"
#include "misratypes.h"
#include "dma.h"

// DMA�]���I�����荞��  
// DMAC DMAC1I
#pragma interrupt (Excep_DMAC_DMAC1I(vect=199))
void Excep_DMAC_DMAC1I(void)

{
	        
	SCI1.SCR.BIT.TEIE = 1;  	// TEI���荞��(���M�I�����荞��)���� (�S�f�[�^���M�����Ŕ���)
}



//
// DMA �`�����l��1 �����ݒ� (�p�\�R���ւ̃V���A���f�[�^���M�p)
//

void DMA1_ini(void) {
	
	DMAC.DMAST.BIT.DMST =0;     // DMAC ��~
	
	DMAC1.DMCNT.BIT.DTE = 0;    // DMAC1 (DMAC �`�����l��1) �]���֎~
	
	ICU.DMRSR1 = 220;           // DMA�N���v���@TXI1�i���荞�݃x�N�^�ԍ�=220�j  SCI1 ���M���荞�݂́ADMA1�ŏ���
	
	
	DMAC1.DMAMD.WORD = 0x8000;  // �]����=�C���N�������g�A�]����=�A�h���X�Œ�
	DMAC1.DMTMD.WORD = 0x2001;  // �m�[�}���]���A���s�[�g�A�u���b�N�̈�Ȃ��A8bit�]���A���Ӄ��W���[������̊��荞�݂ɂ��J�n
	
	DMAC1.DMINT.BIT.DTIE = 1;   // �w�肵���񐔂̃f�[�^�]�����I�������Ƃ��̓]���I�����荞�ݗv��������
	
	IPR(DMAC,DMAC1I) = 9;		// �]���I�����荞�݃��x�� = 9
	IEN(DMAC,DMAC1I) = 1;		// �]���I�����荞�݋���
	
	DMAC.DMAST.BIT.DMST =1;     // DMAC �N��
	
	
}
