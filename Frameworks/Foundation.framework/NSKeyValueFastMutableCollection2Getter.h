/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueMutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {

	NSKeyValueGetter* _baseGetter;
	NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;

}
-(void)dealloc;
-(id)mutatingMethods;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5 ;
-(id)baseGetter;
@end

