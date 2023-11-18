//
//
//

#ifndef _EVP_CCM_H_
#define _EVP_CCM_H_

int ccm_encrypt(unsigned char *plaintext, int plaintext_len,
    unsigned char *aad, int aad_len,
    unsigned char *key,
    unsigned char *iv,
    unsigned char *ciphertext,
    unsigned char *tag);
int ccm_decrypt(unsigned char *ciphertext, int ciphertext_len,
    unsigned char *aad, int aad_len,
    unsigned char *tag,
    unsigned char *key,
    unsigned char *iv,
    unsigned char *plaintext);

#endif
