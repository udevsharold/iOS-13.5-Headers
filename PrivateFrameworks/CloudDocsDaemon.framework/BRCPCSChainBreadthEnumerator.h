/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol PQLEnumeration;
@class BRCPCSChainInfo, PQLResultSet;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {

	BRCPCSChainInfo* _chainInfo;
	PQLResultSet*<PQLEnumeration> _enumerator;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
-(id)chainInfo;
@end

