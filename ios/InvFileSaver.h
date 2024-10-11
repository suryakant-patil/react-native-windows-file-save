#ifdef __cplusplus
#import "react-native-inv-file-saver.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNInvFileSaverSpec.h"

@interface InvFileSaver : NSObject <NativeInvFileSaverSpec>
#else
#import <React/RCTBridgeModule.h>

@interface InvFileSaver : NSObject <RCTBridgeModule>
#endif

@end
