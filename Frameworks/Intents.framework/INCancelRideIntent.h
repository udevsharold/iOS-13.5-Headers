/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>

@class NSString;

@interface INCancelRideIntent : INIntent {

	NSString* _rideIdentifier;

}

@property (nonatomic,copy,readonly) NSString * rideIdentifier;              //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)rideIdentifier;
-(id)initWithRideIdentifier:(id)arg1 ;
@end

