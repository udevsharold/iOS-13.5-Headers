/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class NWPathEvaluator, NSString;

@interface _DKWiFiConnectionMonitor : _DKMonitor {

	NWPathEvaluator* _pathEvaluator;
	NSString* _currentWirelessSSID;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;              //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (nonatomic,copy) NSString * currentWirelessSSID;                 //@synthesize currentWirelessSSID=_currentWirelessSSID - In the implementation block
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(NSString *)currentWirelessSSID;
-(void)setCurrentWirelessSSID:(NSString *)arg1 ;
@end

