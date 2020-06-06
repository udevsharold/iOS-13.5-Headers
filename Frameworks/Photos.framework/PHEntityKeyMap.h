/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PHEntityKeyMap : NSObject {

	NSDictionary* _propertyKeysByEntityKey;
	NSDictionary* _entityKeysByPropertyKey;

}
+(id)transposePropertyKeysByEntityKey:(id)arg1 ;
+(void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(id)arg3 ;
-(id)initWithPropertyKeysByEntityKey:(id)arg1 ;
-(id)entityKeyForPropertyKey:(id)arg1 ;
-(id)propertyKeyForEntityKey:(id)arg1 ;
@end

