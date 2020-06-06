/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextInputStringTokenizer.h>

@class TSDTextInputResponder;

@interface TSDTextInputTokenizer : UITextInputStringTokenizer {

	TSDTextInputResponder* _textInputResponder;

}

@property (nonatomic,readonly) id<TSDTextInput> editor; 
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)initWithTextInput:(id)arg1 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(id<TSDTextInput>)editor;
-(id)p_positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)p_moveToEndOfWordFromPosition:(id)arg1 ;
-(id)p_moveToStartOfWordFromPosition:(id)arg1 ;
@end

