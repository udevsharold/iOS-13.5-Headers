/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@interface WFObjectHasher : NSObject {

	SipHasher _hasher;
	unsigned long long _hash;
	BOOL _finalized;

}
-(id)init;
-(unsigned long long)finalize;
-(id)combine:(id)arg1 ;
-(id)combineInteger:(long long)arg1 ;
-(id)combineContentsOf:(id)arg1 ;
-(id)combineBool:(BOOL)arg1 ;
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
@end

