/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STWifiStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (assign,getter=isWifiActive,nonatomic) BOOL wifiActive; 
@property (assign,nonatomic) unsigned long long signalStrengthBars; 
@property (assign,getter=isAssociatedToIOSHotspot,nonatomic) BOOL associatedToIOSHotspot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSignalStrengthBars:(unsigned long long)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)setWifiActive:(BOOL)arg1 ;
-(void)setAssociatedToIOSHotspot:(BOOL)arg1 ;
@end

