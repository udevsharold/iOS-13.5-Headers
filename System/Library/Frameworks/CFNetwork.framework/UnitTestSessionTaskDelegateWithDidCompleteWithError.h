/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/UnitTestSessionTaskDelegate.h>

@interface UnitTestSessionTaskDelegateWithDidCompleteWithError : UnitTestSessionTaskDelegate {

	SmartBlockWithArgs<bool>* _didDidCompleteWithErrorCompletionBlock;

}

@property (assign,nonatomic) SmartBlockWithArgs<bool>* didDidCompleteWithErrorCompletionBlock;              //@synthesize didDidCompleteWithErrorCompletionBlock=_didDidCompleteWithErrorCompletionBlock - In the implementation block
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(SmartBlockWithArgs<bool>*)didDidCompleteWithErrorCompletionBlock;
-(void)setDidDidCompleteWithErrorCompletionBlock:(SmartBlockWithArgs<bool>*)arg1 ;
@end
