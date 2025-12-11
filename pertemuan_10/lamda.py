# Function biasa
def to_usd(idr):
    return idr / 15000

# Versi Lambda
to_usd_lambda = lambda idr: idr / 15000

print(to_usd_lambda(30000)) # Output: 2.0

