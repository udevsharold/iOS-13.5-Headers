/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:00:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCReaderModeIngestionSessionStarted, NSString;

@interface NFAWDReaderModeIngestionSessionStarted : NSObject <NFAWDEventProtocol> {

	AWDNFCReaderModeIngestionSessionStarted* _metric;

}

@property (nonatomic,retain) AWDNFCReaderModeIngestionSessionStarted * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(AWDNFCReaderModeIngestionSessionStarted *)metric;
-(void)setMetric:(AWDNFCReaderModeIngestionSessionStarted *)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
@end
