/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIKeyboardInteractionProtocol <NSObject>
@required
-(void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
-(void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
-(void)addTouchEvent:(id)arg1;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
-(void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
-(void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
-(void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
-(void)setClientID:(id)arg1 keyboardState:(id)arg2;

@end

