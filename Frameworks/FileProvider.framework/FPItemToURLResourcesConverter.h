/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FPItemToURLResourcesConverter : NSObject {

	NSMutableDictionary* _gettersByURLKey;
	NSMutableDictionary* _typesByURLKey;

}
+(id)dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2 ;
-(void)_addHelperMethodsToClass:(Class)arg1 ;
-(void)_cacheImplementedPropertiesForClass:(Class)arg1 ;
-(void)_addMethod:(SEL)arg1 toClass:(Class)arg2 ;
-(id)initWithItemClass:(Class)arg1 ;
-(id)_dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2 ;
@end

