/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPersistenceManagerNotificationAvailabilityDidChange : RTNotification {

	unsigned long long _availability;

}

@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
-(id)description;
-(unsigned long long)availability;
-(id)initWithAvailability:(unsigned long long)arg1 ;
@end
