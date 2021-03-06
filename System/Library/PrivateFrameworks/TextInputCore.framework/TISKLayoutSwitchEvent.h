/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKTimestampEvent.h>

@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent {

	TIKeyboardLayout* _layout;

}

@property (nonatomic,retain) TIKeyboardLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)description;
-(TIKeyboardLayout *)layout;
-(void)setLayout:(TIKeyboardLayout *)arg1 ;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(id)init:(double)arg1 layout:(id)arg2 order:(long long)arg3 ;
@end

