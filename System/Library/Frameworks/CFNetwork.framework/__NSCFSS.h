/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFSS : NSObject {

	/*^block*/id _capturedStreams;
	/*function pointer*/void* _trustEval;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)completeWithError:(id)arg1 ;
-(id)initWithTrustChallenge:(/*function pointer*/void*)arg1 capture:(/*^block*/id)arg2 ;
-(BOOL)shouldTrust:(SecTrustRef)arg1 ;
-(void)connectionEstablished:(id)arg1 outputStream:(id)arg2 ;
@end
