/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXSSKeyChord, _VOSProfileCommand;

@interface _VOSProfileKeyChord : NSObject <NSSecureCoding> {

	AXSSKeyChord* _keyChord;
	_VOSProfileCommand* _command;

}

@property (nonatomic,retain) AXSSKeyChord * keyChord;                          //@synthesize keyChord=_keyChord - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * command;              //@synthesize command=_command - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileKeyChordWithKeyChord:(id)arg1 ;
+(id)profileKeyChordWithStringValue:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCommand:(_VOSProfileCommand *)arg1 ;
-(_VOSProfileCommand *)command;
-(id)_initWithKeyChord:(id)arg1 ;
-(AXSSKeyChord *)keyChord;
-(void)setKeyChord:(AXSSKeyChord *)arg1 ;
@end

