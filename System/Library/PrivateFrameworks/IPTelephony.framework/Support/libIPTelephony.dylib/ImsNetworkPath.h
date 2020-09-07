/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
@class NWPathEvaluator;

@interface ImsNetworkPath : NSObject {

	NWPathEvaluator* _pathEvaluator;
	ImsNetworkPathDelegate* _delegate;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _ifaceName;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)ifaceName;
-(id)initWithInterface:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 delegate:(ImsNetworkPathDelegate*)arg2 ;
-(void)evaluateInterface;
@end
