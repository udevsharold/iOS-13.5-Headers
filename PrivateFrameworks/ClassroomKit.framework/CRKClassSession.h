/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKSession.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@class DMFControlSessionIdentifier, NSDate, NSString;

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate> {

	unsigned short _flags;
	DMFControlSessionIdentifier* _identifier;
	NSDate* _lastBeaconFoundDate;

}

@property (assign,nonatomic) unsigned short flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSDate * lastBeaconFoundDate;                            //@synthesize lastBeaconFoundDate=_lastBeaconFoundDate - In the implementation block
@property (nonatomic,readonly) DMFControlSessionIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DMFControlSessionIdentifier *)identifier;
-(unsigned short)flags;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setFlags:(unsigned short)arg1 ;
-(id)stateDictionary;
-(void)logBeaconFound;
-(id)lastMatchMessageForCurrentDate:(id)arg1 ;
-(void)setLastBeaconFoundDate:(NSDate *)arg1 ;
-(void)lostBeacon;
-(NSDate *)lastBeaconFoundDate;
-(void)foundBeaconWithFlags:(unsigned short)arg1 ;
@end

