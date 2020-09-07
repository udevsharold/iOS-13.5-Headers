/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, NSString;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord {

	TIKeyboardLayout* _keyboardLayout;
	NSString* _name;

}

@property (nonatomic,retain) TIKeyboardLayout * keyboardLayout;              //@synthesize keyboardLayout=_keyboardLayout - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)shortDescription;
-(TIKeyboardLayout *)keyboardLayout;
-(void)setKeyboardLayout:(TIKeyboardLayout *)arg1 ;
@end
