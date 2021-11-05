Blockly.JavaScript['aidude_yolo_20_class'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(4) != 4 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_yolo_custom'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(3) != 3 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_mobilenet_custom'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(3) != 3 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[30];
        uint8_t counds = classification(_obj);
        for(int i=0;i<counds;i++){
          uint16_t  __class = ((uint16_t)_obj[(i*3)+0]<<8) | _obj[(i*3)+1];
          int  __confidence = _obj[(i*3)+2];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_mobilenet'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
    var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(8) != 8 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[30];
        uint8_t counds = classification(_obj);
        for(int i=0;i<counds;i++){
          uint16_t  __class = ((uint16_t)_obj[(i*3)+0]<<8) | _obj[(i*3)+1];
          int  __confidence = _obj[(i*3)+2];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_face_detection'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
    var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(6) != 6 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_face_recognition'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(13) != 13 || face_recognition_threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[30];
        uint8_t counds = classification(_obj);
        for(int i=0;i<counds;i++){
          uint16_t  __class = ((uint16_t)_obj[(i*3)+0]<<8) | _obj[(i*3)+1];
          int  __confidence = _obj[(i*3)+2];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_facemask_detection'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(11) != 11 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_hand_detection'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(12) != 12 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_garbage_classification'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(7) != 7 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[30];
        uint8_t counds = classification(_obj);
        for(int i=0;i<counds;i++){
          uint16_t  __class = ((uint16_t)_obj[(i*3)+0]<<8) | _obj[(i*3)+1];
          int  __confidence = _obj[(i*3)+2];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_cat_face_detection'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(5) != 5 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

// Blockly.JavaScript['aidude_wake_word_detection'] = function(block) {
//   var number_threshold = block.getFieldValue('Threshold');
//   var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
//   // TODO: Assemble JavaScript into code variable.
//   var code = `
//       #EXTINC
//       #include "kbai_api.h" 
//       #END
//       #VARIABLE

//       #END
//       #SETUP
//       Wire1.begin(4, 5);
//       Wire1.setClock(100000L);
//       while(setmode(14) != 14 || threshold(${number_threshold}) != ${number_threshold}){
//         delay(1000);
//       }
//       #END
//       if(new_data_available() == 1){
//         uint8_t _obj[30];
//         uint8_t counds = classification(_obj);
//         for(int i=0;i<counds;i++){
//           uint16_t  __class = ((uint16_t)_obj[(i*3)+0]<<8) | _obj[(i*3)+1];
//           int  __confidence = _obj[(i*3)+2];

//           ${statements_code}
//         }
//       }
//       \n
//       `;
//   return code;
// };

Blockly.JavaScript['aidude_head_detection'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(10) != 10 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[60];
        int __rw = W();
        int __rh = H();
        uint8_t counds = objectdetection(_obj);
        for(int i=0;i<counds;i++){
          int  __x = (_obj[(i*6)+1]*__rw)*0.01f;
          int  __y = (_obj[(i*6)+2]*__rh)*0.01f;
          int  __w = (_obj[(i*6)+3]*__rw)*0.01f;
          int  __h = (_obj[(i*6)+4]*__rh)*0.01f;
          int  __class = _obj[(i*6)+0];
          int  __confidence = _obj[(i*6)+5];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

Blockly.JavaScript['aidude_car_classification'] = function(block) {
  var number_threshold = block.getFieldValue('Threshold');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(9) != 9 || threshold(${number_threshold}) != ${number_threshold}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[30];
        uint8_t counds = classification(_obj);
        for(int i=0;i<counds;i++){
          uint16_t  __class = ((uint16_t)_obj[(i*3)+0]<<8) | _obj[(i*3)+1];
          int  __confidence = _obj[(i*3)+2];

          ${statements_code}
        }
      }
      \n
      `;
  return code;
};

// Blockly.JavaScript['aidude_qr_detection'] = function(block) {
//   var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
//   // TODO: Assemble JavaScript into code variable.
//   var code = '...;\n';
//   return code;
// };

// Blockly.JavaScript['aidude_line_detection'] = function(block) {
//   var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
//   // TODO: Assemble JavaScript into code variable.
//   var code = '...;\n';
//   return code;
// };

// Blockly.JavaScript['aidude_circle_detection'] = function(block) {
//   var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
//   // TODO: Assemble JavaScript into code variable.
//   var code = '...;\n';
//   return code;
// };

// Blockly.JavaScript['aidude_ract_detection'] = function(block) {
//   var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
//   // TODO: Assemble JavaScript into code variable.
//   var code = '...;\n';
//   return code;
// };

// Blockly.JavaScript['aidude_color_tracking'] = function(block) {
//   var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
//   // TODO: Assemble JavaScript into code variable.
//   var code = '...;\n';
//   return code;
// };
Blockly.JavaScript['getdata_classify'] = function(block) {
  var dropdown_varname = block.getFieldValue('varname');
  // TODO: Assemble JavaScript into code variable.
  var code = dropdown_varname;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
Blockly.JavaScript['getdata_detection'] = function(block) {
  var dropdown_varname = block.getFieldValue('varname');
  // TODO: Assemble JavaScript into code variable.
  var code = dropdown_varname;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
Blockly.JavaScript['frame_rate'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = `fps()`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
// Blockly.JavaScript['num_img'] = function(block) {
//   // TODO: Assemble JavaScript into code variable.
//   var code = `num_img()`;
//   // TODO: Change ORDER_NONE to the correct strength.
//   return [code, Blockly.JavaScript.ORDER_NONE];
// };
// Blockly.JavaScript['num_mic'] = function(block) {
//   // TODO: Assemble JavaScript into code variable.
//   var code = `num_mic()`;
//   // TODO: Change ORDER_NONE to the correct strength.
//   return [code, Blockly.JavaScript.ORDER_NONE];
// };
Blockly.JavaScript['__status'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = `___status()`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
Blockly.JavaScript['__vflip'] = function(block) {
  var dropdown__vflip = block.getFieldValue('_vflip');
  // TODO: Assemble JavaScript into code variable.
  var code = `vflip(${dropdown__vflip})`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
Blockly.JavaScript['__hmirror'] = function(block) {
  var dropdown__hmirror = block.getFieldValue('_hmirror');
  // TODO: Assemble JavaScript into code variable.
  var code = `hmirror(${dropdown__hmirror})`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
Blockly.JavaScript['face_recognition_save'] = function(block) {
  var value__id = Blockly.JavaScript.valueToCode(block, '_id', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `face_recognition_save(${value__id});\n`;
  return code;
};
Blockly.JavaScript['face_recognition_del'] = function(block) {
  var value__id = Blockly.JavaScript.valueToCode(block, '_id', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `face_recognition_del(${value__id});\n`;
  return code;
};
// Blockly.JavaScript['save_mic'] = function(block) {
//   // TODO: Assemble JavaScript into code variable.
//   var code = 'save_mic();\n';
//   return code;
// };
// Blockly.JavaScript['save_img'] = function(block) {
//   // TODO: Assemble JavaScript into code variable.
//   var code = 'save_img();\n';
//   return code;
// };
// Blockly.JavaScript['save_value_1'] = function(block) {
//   var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
//   // TODO: Assemble JavaScript into code variable.
//   var code = `save_value_1(${value_name});\n`;
//   return code;
// };
// Blockly.JavaScript['save_value_2'] = function(block) {
//   var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
//   // TODO: Assemble JavaScript into code variable.
//   var code = `save_value_2(${value_name});\n`;
//   return code;
// };
// Blockly.JavaScript['init_save_mic_img'] = function(block) {
//   var dropdown___moders = block.getFieldValue('__moders');
//   // TODO: Assemble JavaScript into code variable.
//   var code = `
//       #EXTINC
//       #include "kbai_api.h" 
//       #END
//       #VARIABLE

//       #END
//       #SETUP
//       Wire1.begin(4, 5);
//       Wire1.setClock(100000L);
//       while(setmode(${dropdown___moders}) != ${dropdown___moders} ){
//         delay(1000);
//       }
//       #END
//       \n
//       `;
//   return code;
// };
Blockly.JavaScript['save_image_data_collection'] = function(block) {
  var value_fb_fb = Blockly.JavaScript.valueToCode(block, 'fb_fb', Blockly.JavaScript.ORDER_ATOMIC);
  var value_lr_lr = Blockly.JavaScript.valueToCode(block, 'lr_lr', Blockly.JavaScript.ORDER_ATOMIC);
  var value_lcdc_lcdc = Blockly.JavaScript.valueToCode(block, 'lcdc_lcdc', Blockly.JavaScript.ORDER_ATOMIC);
  if(value_lcdc_lcdc > 100){
    value_lcdc_lcdc = 100;
  }
  if(value_lcdc_lcdc < 0){
    value_lcdc_lcdc = 0;
  }
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(14) != 14){
        delay(1000);
      }
      lcdccc(${value_lcdc_lcdc});
      #END
      save_data_collection(${value_fb_fb},${value_lr_lr});
      \n
      `;
  return code;
  return code;
};
Blockly.JavaScript['aidude_mobilenet_regression_custom'] = function(block) {
  var number_Focus = block.getFieldValue('Focus');
  var statements_code = Blockly.JavaScript.statementToCode(block, 'code');
  // TODO: Assemble JavaScript into code variable.
  var code = `
      #EXTINC
      #include "kbai_api.h" 
      #END
      #VARIABLE

      #END
      #SETUP
      Wire1.begin(4, 5);
      Wire1.setClock(100000L);
      while(setmode(15) != 15 || focus(${number_Focus}) != ${number_Focus}){
        delay(1000);
      }
      #END
      if(new_data_available() == 1){
        uint8_t _obj[20];
        regression(_obj);
        int16_t  __class = ((int16_t)_obj[0]<<8) | _obj[1];
        ${statements_code}
      }
      \n
      `;
  return code;
};