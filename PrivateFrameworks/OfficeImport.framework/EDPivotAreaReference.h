/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotAreaReference : NSObject {
    boolmByPosition;
    boolmRelative;
    boolmSelected;
    unsigned long mCount;
    unsigned long mFieldId;
}

+ (id)pivotAreaReference;

- (bool)byPosition;
- (unsigned long)count;
- (unsigned long)fieldId;
- (id)init;
- (bool)relative;
- (bool)selected;
- (void)setByPosition:(bool)arg1;
- (void)setCount:(unsigned long)arg1;
- (void)setFieldId:(unsigned long)arg1;
- (void)setRelative:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
